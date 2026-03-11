/*
 * func-name: ?clear@?$vector@PAVModel@@V?$allocator@PAVModel@@@std@@@std@@QAEXXZ
 * func-address: 0x10057ee0
 * callers: 0x1000ce20, 0x1000d550, 0x1000d9a0, 0x1000e4f0, 0x1000e6c0, 0x1000e890, 0x1001fed0, 0x10020000, 0x10020130, 0x10020260, 0x100218c0, 0x10021a90, 0x10021c60, 0x10021e30, 0x100220e0, 0x100228a0, 0x10022c20, 0x10022df0, 0x10022fc0, 0x10023270, 0x10023440, 0x10023610, 0x100238d0, 0x100588c0, 0x10058a90, 0x10058c60, 0x10058e40, 0x1006e4d0, 0x1006e6a0, 0x1006eb30, 0x1006ed00, 0x1006eed0, 0x10077220, 0x100773f0, 0x1009f6b0, 0x100d07b0, 0x100d0980, 0x100d0b50, 0x100debd0, 0x100df070, 0x100efe90, 0x100f04f0, 0x10108f10
 * callees: 0x100a1d10
 */

int __thiscall std::vector<Model *>::clear(_DWORD *this)
{
  void *v2; // edi
  void *v3; // ebx
  int v5; // [esp+10h] [ebp-8h] BYREF

  v2 = (void *)this[2];
  if ( this[1] > (unsigned int)v2 )
    invalid_parameter_noinfo();
  v3 = (void *)this[1];
  if ( (unsigned int)v3 > this[2] )
    invalid_parameter_noinfo();
  return std::vector<Model *>::erase((int)&v5, (int)this, v3, (int)this, v2);
}
