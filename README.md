# Lib Easy Events
Easy to use event loop for small projects

### Usage
```c++
_tm_is_running = 1;

// Subject setup
Subject *app_subject = new Subject{ "key_events_subject" };
// Observers
const Observer key_input_obs = Observer{ "key_events_observer" }; // TODO add name or use reflection

// Register observers
app_subject->attach(key_input_obs);

while (_tm_is_running > 0)
{
    std::cout << "While loop running...\n";
    // check for an event to arrive
    // Check the size of the events vector
        // - if there is an event then check to see who is interested in it
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