/*
 * func-name: ?IsFloatNumber@CRENumericEditBox@@MAE_NIPA_W0@Z
 * func-address: 0x100a6a80
 * callers: none
 * callees: none
 */

bool __thiscall CRENumericEditBox::IsFloatNumber(CRENumericEditBox *this, unsigned int a2, wchar_t *a3, wchar_t *a4)
{
  char v4; // bl
  int v5; // ecx
  wchar_t v6; // ax
  int v7; // eax
  wchar_t v8; // cx

  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = a3[v5];
    if ( v6 == 46 )
      break;
    if ( v6 )
    {
      if ( ++v5 < 260 )
        continue;
    }
    if ( !a4 )
      return a2 == 48
          || a2 == 49
          || a2 == 50
          || a2 == 51
          || a2 == 52
          || a2 == 53
          || a2 == 54
          || a2 == 55
          || a2 == 56
          || a2 == 57
          || a2 == 46 && !v4;
    v7 = 0;
    while ( 1 )
    {
      v8 = a4[v7];
      if ( v8 == 46 )
        break;
      if ( v8 )
      {
        if ( ++v7 < 260 )
          continue;
      }
      return a2 == 48
          || a2 == 49
          || a2 == 50
          || a2 == 51
          || a2 == 52
          || a2 == 53
          || a2 == 54
          || a2 == 55
          || a2 == 56
          || a2 == 57
          || a2 == 46 && !v4;
    }
    break;
  }
  v4 = 1;
  return a2 == 48
      || a2 == 49
      || a2 == 50
      || a2 == 51
      || a2 == 52
      || a2 == 53
      || a2 == 54
      || a2 == 55
      || a2 == 56
      || a2 == 57
      || a2 == 46 && !v4;
}
