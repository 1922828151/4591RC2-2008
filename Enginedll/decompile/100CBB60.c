/*
 * func-name: ??0CREPictureButton@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100cbb60
 * callers: 0x1006a1a0
 * callees: 0x100cb5e0
 */

CREPictureButton *__thiscall CREPictureButton::CREPictureButton(CREPictureButton *this, struct CREDialog *a2)
{
  _DWORD *v3; // eax
  int v4; // ecx

  CREButton::CREButton(this, a2);
  *(_DWORD *)this = &CREPictureButton::`vftable';
  v3 = (_DWORD *)((char *)this + 1136);
  v4 = 16;
  do
  {
    *(v3 - 80) = 0;
    *v3++ = -1;
    --v4;
  }
  while ( v4 );
  return this;
}
