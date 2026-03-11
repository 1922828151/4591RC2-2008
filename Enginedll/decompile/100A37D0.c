/*
 * func-name: ?SetTextureColor@CREPictureButton@@UAEXHK@Z
 * func-address: 0x100a37d0
 * callers: none
 * callees: none
 */

void __thiscall CREPictureButton::SetTextureColor(CREPictureButton *this, unsigned int a2, unsigned int a3)
{
  if ( a2 <= 0xF )
    *((_DWORD *)this + a2 + 284) = a3;
}
