/*
 * func-name: sub_1000AFE0
 * func-address: 0x1000afe0
 * callers: 0x100037e0
 * callees: 0x1000d5a0
 */

int __usercall sub_1000AFE0@<eax>(int a1@<esi>)
{
  int result; // eax
  int v2; // [esp+8h] [ebp-14h] BYREF
  int v3; // [esp+Ch] [ebp-10h] BYREF
  int v4; // [esp+18h] [ebp-4h]

  v2 = 0;
  v4 = 0;
  v3 = a1;
  if ( a1 )
    Outpop::Utility::Ref_Object::addref((Outpop::Utility::Ref_Object *)a1);
  LOBYTE(v4) = 1;
  *(_DWORD *)(a1 + 112) = sub_1000D5A0(&v3, &unk_10030AC4, &v2);
  LOBYTE(v4) = 0;
  Outpop::Utility::Ref_Object::release((Outpop::Utility::Ref_Object *)a1);
  result = -1;
  v4 = -1;
  if ( *(_DWORD *)(a1 + 112) == -1 )
    return (*(int (__cdecl **)(_DWORD, int))(a1 + 36))(*(_DWORD *)(a1 + 40), -1);
  *(_DWORD *)(a1 + 120) = 0;
  return result;
}
