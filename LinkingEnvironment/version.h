#pragma once
#define le_ver 6
#define sub_ver 0
#define build_ver 6
#define VERSIOM(ver) #ver
#define versions(major, sub, build) VERSIOM(major.sub.build)
#define full_versions versions(vm, vs, vb) versions(vm, vs, vb)
//#define filler