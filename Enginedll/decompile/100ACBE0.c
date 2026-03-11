/*
 * func-name: ?SetTextFloatArray@CREEditBox@@QAEXPBMH@Z
 * func-address: 0x100acbe0
 * callers: none
 * callees: 0x100a56d0, 0x100ac120
 */

void __thiscall CREEditBox::SetTextFloatArray(CREEditBox *this, const float *a2, int a3)
{
  int v3; // edi
  wchar_t *v4; // esi
  int v5; // eax
  CREEditBox *v6; // esi
  CREEditBox *v7; // [esp+44h] [ebp-404h]
  wchar_t Buffer[512]; // [esp+48h] [ebp-400h] BYREF

  v3 = 0;
  v7 = this;
  v4 = Buffer;
  if ( a3 <= 0 )
  {
    Buffer[0] = 0;
  }
  else
  {
    do
    {
      v5 = snwprintf(v4, 512 - (v4 - Buffer), L"%.4f ", a2[v3++]);
      v4 += v5;
    }
    while ( v3 < a3 );
    *(v4 - 1) = 0;
  }
  CREEditBox::CUniBuffer::SetText((CREEditBox *)((char *)v7 + 532), Buffer);
  v6 = v7;
  CREEditBox::PlaceCaret(v7, *((_DWORD *)v7 + 135));
  *((_DWORD *)v6 + 189) = *((_DWORD *)v6 + 187);
}
