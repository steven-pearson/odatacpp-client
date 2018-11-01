# Welcome to odatacpp-client
odatacpp-client is an open-source C++ library that implements the Open Data Protocol (OData). It supports the [OData protocol version 4.0](http://docs.oasis-open.org/odata/odata/v4.0/os/part1-protocol/odata-v4.0-os-part1-protocol.html). It currently serves only client and client side proxy generation (code gen) aspects of OData. The server library is under development and will be included soon.

# Getting started

## Getting the source

    git clone https://github.com/odata/odatacpp-client

## Building and testing

Currently the following target platforms are supported:

  * Windows 32-bit
  * OS X 64-bit
  * iOS

### Building on Windows with Visual Studio 2012

1.Please ensure that you have Visual Studio 2012 installed.

2.ODataCpp depends on Casablanca (http://casablanca.codeplex.com) which is distributed as a NuGet package.
  Please restore this NuGet package before you open any solution:

    cd odatacpp-client\msvc
    .nuget\nuget.exe restore odatacpp.sln

3.Open 'odatacpp.sln' under 'odatacpp-client\msvc' with VS2012 and click 'Build Solution' in the 'BUILD' menu.

4.Built libraries are placed under 'odatacpp-client\output\\\<Configuration\>' where '\<Configuration\>' could be either 'Debug' or 'Release' according to your build configuration in VS2012.

### Building on Windows with MSBuild

1.Setup build environment for VS2012:

    cd odatacpp-client
    powershell
    .\setup_ps_env_VS2012.ps1

   If you receive an error message like 'running scripts is disabled on this system', please run PowerShell as administrator, type the following command, and then rerun the setup script above.

    Set-ExecutionPolicy RemoteSigned

2.Here are some examples to invoke MSBuild:

   1) Build Debug version of odatacpp-client libraries in parallel.

    msbuild /m

   2) Build Release version of odatacpp-client libraries.

    msbuild /p:Configuration=Release

   3) Rebuild Debug version of odatacpp-client.

    msbuild /t:Rebuild /p:Configuration=Debug

   4) Clean build outputs.

    msbuild /t:Clean

3.Built libraries are placed under the same folder of VS2012. Actually they are no different than the ones built by VS2012.

### Running tests on Windows

1.After you have successfully built the libraries, you can run our functional and end-to-end tests to check the basic functionality.

  1) Test the Debug version of odatacpp-client Libraries:

    cd odatacpp-client\output\Debug
    TestRunner.exe odata_functional_test.vs11d.dll odata_e2e_test.vs11d.dll

  2) Test the Release version of odatacpp-client Libraries:

    cd odatacpp-client\output\Release
    TestRunner.exe odata_functional_test.vs11.dll odata_e2e_test.vs11.dll

  Don't worry about the failed tests as they are known issues and we will get them fixed in the future releases.

### Building on OS X

1.Please ensure that you have OS X later than 10.9, Xcode later than 5.0 and Xcode Command Line Tools installed.

2.Install the Homebrew package manager (http://brew.sh). Skip this step if you want to use your own package manager.

3.Install the required packages to build odatacpp-client via Homebrew or your own package manager.

    brew install cmake git boost openssl ninja pkg-config 

4.Clone (do not change the location below) and build the dependency library Casablanca (https://github.com/Microsoft/cpprestsdk).

    cd odatacpp-client
    mkdir lib
    cd lib
    git clone https://github.com/Microsoft/cpprestsdk.git casablanca
    cd casablanca
    git submodule update --init
    mkdir build.release
    cd build.release
    cmake ../Release -DCMAKE_BUILD_TYPE=Release
    make -j 4

5.Return to the root folder of odatacpp-client and generate 'Makefile' using CMake.

    cd ../../..
    cmake -DCMAKE_BUILD_TYPE=Debug # replace 'Debug' with 'Release' if needed
    make -j 4

  Ignore the possible warning CMP0042 issued by CMake.

6.Please find your built libraries under 'output'.

### Running tests on OS X

After successfully building the libraries, you can run the functional and end-to-end tests via the terminal.

    cd odatacpp-client/output
    ./test_runner *tests*

Please ignore the failed tests as they are already known to us and will be fixed in the future releases.

### Building for iOS

Complete on Building on OS X. Return to the root folder of odatacpp-client, run following commands.


    cd lib/casablanca/Build_iOS
    ./configure.sh
    cd ../../..
    cd ios
    ./configure.sh

The libraries (libodata-client.a and libodata-library.a) will be built in /ios/build.ios.

# Documentation
Please refer to our [wiki](https://github.com/OData/odatacpp-client/wiki) for documentation.

# Community
## Issue tracker
To report bugs and require features, please use our [issue tracker](https://github.com/OData/odatacpp-client/issues?state=open).

## Team blog
Please visit http://blogs.msdn.com/b/odatateam/.

## Contribution
# How to contribute?
There are many ways for you to contribute to ODataCpp. The easiest way is to participate in discussion of features and issues. You can also contribute by sending pull requests of features or bug fixes to us. Contribution to the documentations at our [Wiki](https://github.com/OData/odatacpp/wiki) is also highly welcomed. 
## Discussion
You can participate into discussions and ask questions about ODataCpp at our [Github issues](https://github.com/OData/odatacpp/issues). 
### Bug reports
When reporting a bug at the issue tracker, please use the following template:
```
### Description
*Does the bug result in any actual functional issue, if so, what?*  

### Minimal repro steps
*What is the smallest, simplest set of steps to reproduce the issue. If needed, provide a project that demonstrates the issue.*  

### Expected result
*What would you expect to happen if there wasn't a bug*  

### Actual result
*What is actually happening*  

### Further technical details
*Optional, details of the root cause if known*  
```

## Pull requests
Pull request of features and bug fixes are both welcomed. Before you send a pull request to us, there are a few steps you need to make sure you've followed. 
### Complete a Contribution License Agreement (CLA)
You will need to complete a Contributor License Agreement (CLA). Briefly, this agreement testifies that you are granting us permission to use the submitted change according to the terms of the project's license, and that the work being submitted is under appropriate copyright.

Please submit a Contributor License Agreement (CLA) before submitting a pull request. Download the agreement ([Microsoft Contribution License Agreement.pdf](https://github.com/odata/odatacpp/wiki/files/Microsoft Contribution License Agreement.pdf)), sign, scan, and email it back to [cla@microsoft.com](mailto:cla@microsoft.com). Be sure to include your Github user name along with the agreement. Only after we have received the signed CLA, we'll review the pull request that you send. You only need to do this once for contributing to any Microsoft open source projects. 

### Create a new issue on the issue tracker and link the pull request to it
You should have an issue created on the [issue tracker](https://github.com/OData/odatacpp/issues) before you work on the pull request. After the ODataCpp team has reviewed this issue and change its label to "accepting pull request", you can issue a pull request to us in which the link to the related issue is included.
### Requirement of pull requests
Your pull request should:

 - Include a description of what your change intends to do
 - Have clear commit messages
 - Include a link to the issue created at the issue tracker or its issue number
 - Include adequate tests
