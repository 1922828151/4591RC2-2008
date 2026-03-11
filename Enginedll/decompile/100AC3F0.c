/*
 * func-name: ?DeleteSelectionText@CREEditBox@@IAEXXZ
 * func-address: 0x100ac3f0
 * callers: 0x100ac480, 0x100ac530, 0x100ac9a0, 0x100ad9a0, 0x100adae0, 0x100c95f0
 * callees: 0x100ac120
 */

void __thiscall CREEditBox::DeleteSelectionText(CREEditBox *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // [esp+Ch] [ebp-4h]

  v2 = *((_DWORD *)this + 187);
  v3 = *((_DWORD *)this + 189);
  v4 = v2;
  if ( v2 >= v3 )
  {
    v4 = *((_DWORD *)this + 189);
    if ( v2 > v3 )
      v3 = *((_DWORD *)this + 187);
  }
  CREEditBox::PlaceCaret(this, v4);
  *((_DWORD *)this + 189) = *((_DWORD *)this + 187);
  if ( v4 < v3 )
  {
    v6 = v3 - v4;
    do
    {
      v5 = *((_DWORD *)this + 135);
      if ( v5 && v4 >= 0 && v4 < v5 )
      {
        memmove(
          (void *)(*((_DWORD *)this + 133) + 2 * v4),
          (const void *)(*((_DWORD *)this + 133) + 2 * v4 + 2),
          2 * (v5 - v4));
        --*((_DWORD *)this + 135);
        *((_BYTE *)this + 548) = 1;
      }
      --v6;
    }
    while ( v6 );
  }
}
