/*
 * func-name: sub_1001A6C0
 * func-address: 0x1001a6c0
 * callers: none
 * callees: 0x10019f50, 0x1001bc20
 */

void __stdcall sub_1001A6C0(Outpop::Utility::Ref_Object **a1)
{
  int v1; // eax
  Outpop::Utility::Ref_Object *v2; // [esp+8h] [ebp-14h] BYREF
  int v3; // [esp+18h] [ebp-4h]

  if ( (*((_BYTE *)*a1 + 97) & 0xF) != 0 )
    v1 = *(_DWORD *)((*((_BYTE *)*a1 + 97) & 0xF) + *((_DWORD *)*a1 + 25));
  else
    v1 = -1;
  sub_1001BC20(&v2, v1);
  v3 = 0;
  if ( v2 )
    sub_10019F50(v2, a1);
  v3 = -1;
  if ( v2 )
    Outpop::Utility::Ref_Object::release(v2);
}
