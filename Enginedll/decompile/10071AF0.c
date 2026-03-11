/*
 * func-name: ??0CREPictureButton@@QAE@ABV0@@Z
 * func-address: 0x10071af0
 * callers: none
 * callees: 0x10071950
 */

CREPictureButton *__thiscall CREPictureButton::CREPictureButton(
        CREPictureButton *this,
        const struct CREPictureButton *a2)
{
  CREButton::CREButton(this, a2);
  *(_DWORD *)this = &CREPictureButton::`vftable';
  qmemcpy((char *)this + 816, (char *)a2 + 816, 0x40u);
  qmemcpy((char *)this + 880, (char *)a2 + 880, 0x100u);
  qmemcpy((char *)this + 1136, (char *)a2 + 1136, 0x40u);
  return this;
}
