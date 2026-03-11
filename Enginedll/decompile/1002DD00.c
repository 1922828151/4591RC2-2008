/*
 * func-name: ?ClearFrustums@Camera@@QAEXXZ
 * func-address: 0x1002dd00
 * callers: none
 * callees: 0x10010060
 */

void __thiscall Camera::ClearFrustums(Camera *this)
{
  int *v1; // esi
  unsigned int v2; // edi
  _DWORD *v3; // ebx
  int v4; // [esp+10h] [ebp-8h] BYREF

  v1 = (int *)((char *)this + 140);
  v2 = *((_DWORD *)this + 37);
  if ( *((_DWORD *)this + 36) > v2 )
    invalid_parameter_noinfo();
  v3 = (_DWORD *)v1[1];
  if ( (unsigned int)v3 > v1[2] )
    invalid_parameter_noinfo();
  sub_10010060(v1, &v4, (int)v1, v3, (int)v1, v2);
}
