/*
 * func-name: ?GetControl@CREDialog@@QAEPAVCREControl@@HI@Z
 * func-address: 0x100a9b60
 * callers: 0x10069670, 0x10069680, 0x10069690, 0x100696a0, 0x100696b0, 0x100696c0, 0x100696d0, 0x100696e0, 0x100696f0, 0x10069700, 0x100b4970
 * callees: none
 */

struct CREControl *__thiscall CREDialog::GetControl(CREDialog *this, int a2, unsigned int a3)
{
  int v3; // esi
  int v4; // edx
  int i; // ecx
  struct CREControl *result; // eax

  v3 = *((_DWORD *)this + 192);
  v4 = 0;
  if ( v3 <= 0 )
    return 0;
  for ( i = *((_DWORD *)this + 191); ; i += 4 )
  {
    result = *(struct CREControl **)i;
    if ( *(_DWORD *)(*(_DWORD *)i + 136) == a2 && *((_DWORD *)result + 35) == a3 )
      break;
    if ( ++v4 >= v3 )
      return 0;
  }
  return result;
}
