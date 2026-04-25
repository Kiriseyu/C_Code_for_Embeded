//
// Created by 26790 on 2026/8/10.
//
#define SWAP(a,b) do{typeof(a) _tmp = (a); (a) = (b); (b) = _tmp;}while(0)
//这里的do while起包裹语句的作用，可以防止语句调用时出现分包报错或多语句结构断裂