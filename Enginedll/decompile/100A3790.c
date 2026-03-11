/*
 * func-name: ?SetTexture@CREPictureButton@@UAEXHPAVTexture@@PAUtagRECT@@@Z
 * func-address: 0x100a3790
 * callers: none
 * callees: none
 */

void __thiscall CREPictureButton::SetTexture(
        struct tagRECT *this,
        unsigned int a2,
        struct Texture *a3,
        struct tagRECT *a4)
{
  if ( a2 <= 0xF )
  {
    *(&this[51].left + a2) = (LONG)a3;
    this[a2 + 55] = *a4;
  }
}
