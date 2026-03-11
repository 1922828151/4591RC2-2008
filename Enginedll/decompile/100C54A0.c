/*
 * func-name: ?RemoveAllNestedDialog@CTYDialog@@QAEXXZ
 * func-address: 0x100c54a0
 * callers: none
 * callees: 0x10052250
 */

void __thiscall CTYDialog::RemoveAllNestedDialog(CTYDialog *this)
{
  _DWORD *v1; // esi
  unsigned int v2; // edi
  unsigned int v3; // ebx
  int v4; // [esp+10h] [ebp-8h] BYREF

  v1 = (_DWORD *)((char *)this + 3752);
  v2 = *((_DWORD *)this + 940);
  if ( *((_DWORD *)this + 939) > v2 )
    invalid_parameter_noinfo();
  v3 = v1[1];
  if ( v3 > v1[2] )
    invalid_parameter_noinfo();
  sub_10052250(v1, &v4, (int)v1, v3, (int)v1, v2);
}
