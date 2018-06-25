all:
	ndk-build -C ./deps/libxhook/jni -j
	ndk-build -C ./jni -j
	maniacli build --config ./build.yaml
