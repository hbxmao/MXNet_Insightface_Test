MXNet_Insightface_Test

参考如下工程

1、insightface的C++版本：https://github.com/njvisionpower/mxnet-insightface-cpp
	csdn博客:https://blog.csdn.net/fengbingchun/article/category/8523737
	
2、mxnet的C++编译环境：https://github.com/fengbingchun/MXNet_Test
	csdn博客：https://blog.csdn.net/fengbingchun/article/details/84997490

本工程将上述两工程合并，结合mxnet+insightface+opencv3.2.0,vs2017下成功编译运行，语言环境为C++。
原作者1提供的insightface特征提取模型较小，可采用insightface作者提供的模型，识别率高于作者1。



下面是MXNet_Test工程的readme.md
- open source library version:
	- MXNet: 1.3.0, [GitHub](https://github.com/apache/incubator-mxnet/releases)
	- OpenBLAS: 0.3.3, [GitHub](https://github.com/xianyi/OpenBLAS/releases)
	- dlmask: master, commit: bee4d1d, [GitHub](https://github.com/dmlc/dlpack)
	- mshadow: master, commit: 2e3a895, [GitHub](https://github.com/dmlc/mshadow)
	- dmlc-core: 0.3, [GitHub](https://github.com/dmlc/dmlc-core/releases)
	- tvm: 0.4, [GitHub](https://github.com/dmlc/tvm/releases)
- test code include:
	- C++(windows and linux)
		- MXNet's third library usage: dmlc-core、OpenBLAS、mshadow
		- MNIST train
	- python(windows and linux)

**The project support platform:** 
- windows10 64 bits: It can be directly build with VS2017 in windows10 64bits.
- Linux 
	- ThirdPartyLibrary_Test support cmake build(file position: prj/linux_cmake_ThirdPartyLibrary_Test)
	- MXNet_Test support cmake build(file position: prj/linux_cmake_MXNet_Test)
