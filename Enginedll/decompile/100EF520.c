/*
 * func-name: ?PreLoad@StaticModel@@QAEXABV?$vector@PAVMaterial@@V?$allocator@PAVMaterial@@@std@@@std@@@Z
 * func-address: 0x100ef520
 * callers: 0x1004eb00
 * callees: 0x1000ce20, 0x100408a0, 0x1009e630, 0x100f16a0
 */

int __thiscall StaticModel::PreLoad(ModelFrame **this, int a2)
{
  int result; // eax
  _DWORD v4[7]; // [esp+4h] [ebp-C4h] BYREF
  _BYTE v5[156]; // [esp+20h] [ebp-A8h] BYREF
  int v6; // [esp+C4h] [ebp-4h]

  if ( this[77] )
  {
    sub_100408A0(v4);
    v6 = 0;
    std::vector<Material *>::operator=((int)v5, a2);
    ModelFrame::PreLoad(this[77], (struct XMLLoad *)v4);
    v6 = -1;
    return sub_100F16A0(v4);
  }
  return result;
}
