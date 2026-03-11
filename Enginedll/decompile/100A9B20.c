/*
 * func-name: ?GetControl@CREDialog@@QAEPAVCREControl@@H@Z
 * func-address: 0x100a9b20
 * callers: 0x100b0210, 0x100b0240, 0x100d5780, 0x100d59b0, 0x100d5f50, 0x10149eb0
 * callees: none
 */

struct CREControl *__thiscall CREDialog::GetControl(CREDialog *this, int a2)
{
  int v2; // esi
  int v3; // edx
  int i; // ecx
  struct CREControl *result; // eax

  v2 = *((_DWORD *)this + 192);
  v3 = 0;
  if ( v2 <= 0 )
    return 0;
  for ( i = *((_DWORD *)this + 191); ; i += 4 )
  {
    result = *(struct CREControl **)i;
    if ( *(_DWORD *)(*(_DWORD *)i + 136) == a2 )
      break;
    if ( ++v3 >= v2 )
      return 0;
  }
  return result;
}
