/*
 * func-name: ?InitAfterLoad@StaticModel@@UAEXXZ
 * func-address: 0x100ef930
 * callers: 0x100f1af0
 * callees: 0x100f1970, 0x101a2534
 */

void __thiscall StaticModel::InitAfterLoad(StaticModel *this)
{
  _DWORD *v2; // eax
  int v3[4]; // [esp+8h] [ebp-10h] BYREF

  if ( !*((_DWORD *)this + 2) )
  {
    v2 = operator new(0x10u);
    if ( v2 )
    {
      v2[1] = 0;
      v2[2] = 0;
      v2[3] = 0;
    }
    else
    {
      v2 = 0;
    }
    v3[3] = -1;
    *((_DWORD *)this + 2) = v2;
    v3[0] = (int)this;
    sub_100F1970((int)v2, (int)v3);
  }
}
