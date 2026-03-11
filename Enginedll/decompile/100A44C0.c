/*
 * func-name: ?ParseFloatArray@CREEditBox@@QAEXPAMH@Z
 * func-address: 0x100a44c0
 * callers: none
 * callees: none
 */

void __thiscall CREEditBox::ParseFloatArray(CREEditBox *this, float *a2, int a3)
{
  const wchar_t *v3; // eax
  int i; // ebp
  const wchar_t *j; // edi
  wchar_t v7; // cx
  size_t v8; // esi
  wchar_t Destination[60]; // [esp+4h] [ebp-78h] BYREF

  v3 = (const wchar_t *)*((_DWORD *)this + 133);
  for ( i = 0; i < a3; v3 = j )
  {
    if ( !*v3 )
      break;
    for ( ; *v3 == 32; ++v3 )
      ;
    if ( !*v3 )
      break;
    for ( j = v3; ; ++j )
    {
      v7 = *j;
      if ( *j != 45 && v7 != 46 && (v7 < 0x30u || v7 > 0x39u) )
        break;
    }
    v8 = j - v3;
    if ( v8 > 0x3B )
      v8 = 59;
    wcsncpy(Destination, v3, v8);
    Destination[v8] = 0;
    *a2 = wtof(Destination);
    ++i;
    ++a2;
  }
}
