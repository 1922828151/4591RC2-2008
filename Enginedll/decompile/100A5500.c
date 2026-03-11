/*
 * func-name: ??0CUniBuffer@CREEditBox@@QAE@H@Z
 * func-address: 0x100a5500
 * callers: 0x1006ac10, 0x10155c10, 0x10156140, 0x10157440, 0x10157630
 * callees: 0x101a24ac
 */

CREEditBox::CUniBuffer *__thiscall CREEditBox::CUniBuffer::CUniBuffer(CREEditBox::CUniBuffer *this, int a2)
{
  _WORD *v3; // eax

  v3 = operator new(2 * a2);
  *(_DWORD *)this = v3;
  *v3 = 0;
  *((_DWORD *)this + 1) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_BYTE *)this + 16) = 1;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 3) = 0;
  return this;
}
