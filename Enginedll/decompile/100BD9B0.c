/*
 * func-name: ?Render@CRETabPages@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100bd9b0
 * callers: none
 * callees: 0x100b5850, 0x100b5e40
 */

void __thiscall CRETabPages::Render(CRETabPages *this, struct IDirect3DDevice9 *a2, float a3)
{
  LONG v4; // edx
  struct CREElement *v5; // edi
  LONG v6; // eax
  LONG v7; // eax
  CREDialog *v8; // ecx
  struct tagRECT v9; // [esp+Ch] [ebp-10h] BYREF

  v4 = *((_DWORD *)this + 42);
  v5 = (struct CREElement *)**((_DWORD **)this + 30);
  v6 = *((_DWORD *)this + 43);
  v9.left = *((_DWORD *)this + 41);
  v9.right = v6;
  v7 = *((_DWORD *)this + 44) - 32;
  v8 = (CREDialog *)*((_DWORD *)this + 28);
  v9.top = v4;
  v9.bottom = v7;
  CREDialog::DrawRect(v8, &v9, 0x8C77C5D1, 1.0);
  CREDialog::DrawSprite(*((CREDialog **)this + 28), v5, &v9, 1.0);
}
