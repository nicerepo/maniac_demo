# maniac_demo

## Preview
<img src="https://github.com/nicerepo/maniac_demo/raw/master/demo.gif" width="480" />

## Build
1. Install `ndk` and `maniacli`.
2. Install `/app` with Android Studio.
3. `cd package && make` and copy the appropriate build artifact to the device.

## Installation
Add your public key on MANIAC then install the package.

### For use with emulator (AVD)
For best results, launch AVD with the following parameters:

```
~/Android/Sdk/emulator/emulator -avd API_28_x86 -writable-system -selinux permissive -qemu -enable-kvm
```

If `su` daemon is not available, you may need to invoke `maniacrun` manually as root via `adb`.

## Acknowledgements
* iqiyi/xHook (MIT)
