/*
 * func-name: ?ClearText@CFormatedStatic@@QAEXXZ
 * func-address: 0x10157030
 * callers: none
 * callees: 0x100d2910
 */

void __thiscall CFormatedStatic::ClearText(CFormatedStatic *this)
{
  char *v1; // esi
  char *v2; // edi
  char *v3; // ebx
  int v4; // [esp+10h] [ebp-8h] BYREF

  v1 = (char *)this + 696;
  v2 = (char *)*((_DWORD *)this + 176);
  if ( *((_DWORD *)this + 175) > (unsigned int)v2 )
    invalid_parameter_noinfo();
  v3 = (char *)*((_DWORD *)v1 + 1);
  if ( (unsigned int)v3 > *((_DWORD *)v1 + 2) )
    invalid_parameter_noinfo();
  sub_100D2910((char **)v1, &v4, (int)v1, v3, (int)v1, v2);
}
