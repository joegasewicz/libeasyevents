# Lib Easy Events
Easy to use event loop for small projects

### Usage
```c++
_tm_is_running = 1;

// Subject setup
Subject<std::string> *app_subject = new Subject<std::string>{ "key_input_subject" };
// Observers
const Observer key_input_obs = Observer{ "key_input_observer" }; // TODO add name or use reflection

// Register observers
app_subject->attach(key_input_obs);

while (_tm_is_running > 0)
{
    std::cout << "While loop running...\n";
    // A user might press a key
    // - Update the state of the subject interest in the key input event
    //        if (userOpt)
    //        {
    //            app_subject->update_state("user_input", "Z key");
    //        }
    // Notify all observer interested in this subject
    app_subject->notify();
    // if there are no events then continue
    _tm_is_running = 0;
}
```

### Install
clone this repo into the root of your project
```bash
git clone https://github.com/joegasewicz/libeasyevents
```
Reference the header file
```c++
#incude "libeasyevents/easy_events.h" 
```

### Observers
- Keyboard Events
- Errors
- ...