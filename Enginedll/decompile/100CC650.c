/*
 * func-name: ??1CRETextBox@@UAE@XZ
 * func-address: 0x100cc650
 * callers: 0x1006b000
 * callees: 0x1000cb70, 0x10069fa0, 0x101a2500
 */

void __thiscall CRETextBox::~CRETextBox(CRETextBox *this)
{
  void *v2; // edi

  *(_DWORD *)this = &CRETextBox::`vftable';
  if ( !*((_BYTE *)this + 700) )
  {
    v2 = (void *)*((_DWORD *)this + 174);
    if ( v2 )
    {
      Texture::~Texture(*((void ***)this + 174));
      operator delete(v2);
      *((_DWORD *)this + 174) = 0;
    }
  }
  CREStatic::~CREStatic(this);
}
