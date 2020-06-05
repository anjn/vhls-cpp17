# How to csynth
```
vitis_hls -f hls.tcl
```


# Trouble shooting
```
ERROR: [HLS 207-812] 'sys/cdefs.h' file not found: /usr/include/features.h:424:12
command 'ap_source' returned error code
    while executing
"source hls.tcl"
    ("uplevel" body line 1)
    invoked from within
"uplevel \#0 [list source $arg] "
```

```
sudo apt install g++-multilib
```
