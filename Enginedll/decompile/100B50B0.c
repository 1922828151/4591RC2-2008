/*
 * func-name: ?SetExternalBGTexture@CRETextBox@@UAEXPAVTexture@@@Z
 * func-address: 0x100b50b0
 * callers: none
 * callees: 0x1000cb70, 0x101a2500
 */

void __thiscall CRETextBox::SetExternalBGTexture(CRETextBox *this, struct Texture *a2)
{
  void *v3; // edi

  if ( !*((_BYTE *)this + 700) )
  {
    v3 = (void *)*((_DWORD *)this + 174);
    if ( v3 )
    {
      Texture::~Texture(*((void ***)this + 174));
      operator delete(v3);
      *((_DWORD *)this + 174) = 0;
    }
  }
  *((_BYTE *)this + 700) = 1;
  *((_DWORD *)this + 174) = a2;
  if ( a2 )
    *((_BYTE *)a2 + 58) = 0;
}
