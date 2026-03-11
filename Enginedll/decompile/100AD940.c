/*
 * func-name: ?ApplyFontProperties@CRETextBox@@MAEXXZ
 * func-address: 0x100ad940
 * callers: none
 * callees: none
 */

void __thiscall CRETextBox::ApplyFontProperties(CRETextBox *this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // edx
  _DWORD *v3; // eax
  int v4; // ecx

  v1 = (_DWORD *)**((_DWORD **)this + 30);
  v1[1] = *((_DWORD *)this + 140);
  if ( *((_BYTE *)this + 644) )
  {
    v1[2] = *((_DWORD *)this + 162) | 0x10;
    *((_BYTE *)this + 644) = 0;
  }
  v2 = v1 + 29;
  v3 = (_DWORD *)((char *)this + 564);
  v4 = 16;
  do
  {
    *v2++ = *v3++;
    --v4;
  }
  while ( v4 );
}
