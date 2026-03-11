/*
 * func-name: ?GetDefaultElement@CREDialog@@QAEPAVCREElement@@II@Z
 * func-address: 0x100a9ad0
 * callers: 0x101543d0
 * callees: none
 */

struct CREElement *__thiscall CREDialog::GetDefaultElement(CREDialog *this, unsigned int a2, unsigned int a3)
{
  int v3; // esi
  int v4; // edx
  _DWORD *i; // ecx
  _DWORD *v6; // eax

  v3 = *((_DWORD *)this + 195);
  v4 = 0;
  if ( v3 <= 0 )
    return 0;
  for ( i = (_DWORD *)*((_DWORD *)this + 194); ; ++i )
  {
    v6 = (_DWORD *)*i;
    if ( *(_DWORD *)*i == a2 && v6[1] == a3 )
      break;
    if ( ++v4 >= v3 )
      return 0;
  }
  return (struct CREElement *)(v6 + 2);
}
