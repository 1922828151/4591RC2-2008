/*
 * func-name: ?AddIMEEditBox@CREDialog@@QAEJHPB_WHHHH_NPAPAVCREIMEEditBox@@@Z
 * func-address: 0x100cb320
 * callers: none
 * callees: 0x100a56d0, 0x100ac120, 0x100b3510, 0x100c86a0, 0x101a2534
 */

int __thiscall CREDialog::AddIMEEditBox(
        CREDialog *this,
        int a2,
        wchar_t *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        bool a8,
        struct CREIMEEditBox **a9)
{
  CREIMEEditBox *v10; // eax
  CREIMEEditBox *v11; // esi
  int result; // eax
  void (__thiscall *v13)(CREIMEEditBox *, int, int); // edx

  v10 = (CREIMEEditBox *)operator new(0x370u);
  if ( v10 )
    v11 = CREIMEEditBox::CREIMEEditBox(v10, this);
  else
    v11 = 0;
  if ( a9 )
    *a9 = v11;
  if ( !v11 )
    return -2147024882;
  result = CREDialog::AddControl(this, v11);
  if ( result >= 0 )
  {
    v13 = *(void (__thiscall **)(CREIMEEditBox *, int, int))(*(_DWORD *)v11 + 156);
    *((_DWORD *)v11 + 34) = a2;
    v13(v11, a4, a5);
    (*(void (__thiscall **)(CREIMEEditBox *, int, int))(*(_DWORD *)v11 + 160))(v11, a6, a7);
    *((_BYTE *)v11 + 93) = a8;
    if ( a3 )
    {
      CREEditBox::CUniBuffer::SetText((CREIMEEditBox *)((char *)v11 + 532), a3);
      CREEditBox::PlaceCaret(v11, *((_DWORD *)v11 + 135));
      *((_DWORD *)v11 + 189) = *((_DWORD *)v11 + 187);
    }
    return 0;
  }
  return result;
}
