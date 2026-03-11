/*
 * func-name: sub_102B0D30
 * func-address: 0x102b0d30
 * callers: 0x1001a4c4
 * callees: 0x10003724, 0x1000cdf6, 0x102c9d98
 */

int __thiscall sub_102B0D30(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // ecx
  int *v5; // edx
  int v6; // esi
  int v7; // ecx
  int v8; // edi
  int result; // eax

  v3 = operator new(8u);
  if ( v3 )
  {
    v4 = a2;
    *v3 = &Outpop::Utility::Singleton_Holder_T<GameClientConfig>::`vftable';
    v3[1] = v4;
  }
  else
  {
    v3 = 0;
  }
  v5 = (int *)this[1];
  v6 = *v5;
  v7 = *(_DWORD *)(*v5 + 4);
  a2 = v3;
  v8 = sub_10003724(v6, v7, (int)&a2);
  result = sub_1000CDF6(1);
  *(_DWORD *)(v6 + 4) = v8;
  **(_DWORD **)(v8 + 4) = v8;
  return result;
}
