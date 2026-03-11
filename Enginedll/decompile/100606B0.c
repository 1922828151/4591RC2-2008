/*
 * func-name: sub_100606B0
 * func-address: 0x100606b0
 * callers: none
 * callees: 0x10061550, 0x100615b0, 0x10061e30, 0x100628e0
 */

int __thiscall sub_100606B0(_DWORD *this, int a2)
{
  int v3; // edi
  int result; // eax
  int v5; // edi

  this[27] = a2;
  sub_100615B0(1024);
  sub_10061550(1024);
  sub_100615B0(1024);
  v3 = (**(int (__thiscall ***)(_DWORD))this[27])(this[27]);
  result = sub_10061E30(v3);
  v5 = v3 - 1;
  for ( LOWORD(a2) = -1; v5 >= 0; --v5 )
    result = sub_100628E0(&a2);
  return result;
}
