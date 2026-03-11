/*
 * func-name: ?InsertChar@CUniBuffer@CREEditBox@@QAE_NH_W@Z
 * func-address: 0x100a5620
 * callers: 0x100ac480, 0x100ac9a0, 0x100ad9a0, 0x100adae0, 0x100b49b0, 0x100c0490, 0x100c8fd0
 * callees: 0x100a5410
 */

bool __thiscall CREEditBox::CUniBuffer::InsertChar(CREEditBox::CUniBuffer *this, int a2, wchar_t a3)
{
  int v4; // eax
  bool result; // al

  v4 = *((_DWORD *)this + 2);
  if ( a2 > v4 || v4 + 1 >= *((_DWORD *)this + 1) && !CREEditBox::CUniBuffer::Grow(this) )
    return 0;
  memmove(
    (void *)(*(_DWORD *)this + 2 * a2 + 2),
    (const void *)(*(_DWORD *)this + 2 * a2),
    2 * (*((_DWORD *)this + 2) - a2) + 2);
  *(_WORD *)(*(_DWORD *)this + 2 * a2) = a3;
  result = 1;
  ++*((_DWORD *)this + 2);
  *((_BYTE *)this + 16) = 1;
  return result;
}
