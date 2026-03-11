/*
 * func-name: ?RemoveChar@CUniBuffer@CREEditBox@@QAE_NH@Z
 * func-address: 0x100a5680
 * callers: 0x100ac530, 0x100ac9a0, 0x100adae0, 0x100c0490, 0x100c5fd0, 0x100c8fd0, 0x100c95f0
 * callees: none
 */

bool __thiscall CREEditBox::CUniBuffer::RemoveChar(CREEditBox::CUniBuffer *this, int a2)
{
  int v3; // eax
  bool result; // al

  v3 = *((_DWORD *)this + 2);
  if ( !v3 || a2 < 0 || a2 >= v3 )
    return 0;
  memmove((void *)(*(_DWORD *)this + 2 * a2), (const void *)(*(_DWORD *)this + 2 * a2 + 2), 2 * (v3 - a2));
  --*((_DWORD *)this + 2);
  result = 1;
  *((_BYTE *)this + 16) = 1;
  return result;
}
