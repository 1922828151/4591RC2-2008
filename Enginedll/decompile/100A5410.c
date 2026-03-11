/*
 * func-name: ?Grow@CUniBuffer@CREEditBox@@AAE_NXZ
 * func-address: 0x100a5410
 * callers: 0x100a5620, 0x100c5520, 0x100c8fd0
 * callees: 0x101a24ac, 0x101a252e, 0x101a253a
 */

char __thiscall CREEditBox::CUniBuffer::Grow(CREEditBox::CUniBuffer *this)
{
  int v2; // eax
  int v3; // ebp
  void *v4; // edi

  v2 = *((_DWORD *)this + 1);
  v3 = 2 * v2;
  if ( !v2 )
    v3 = 256;
  v4 = operator new(2 * v3);
  if ( !v4 )
    return 0;
  if ( *(_DWORD *)this )
    memcpy(v4, *(const void **)this, 2 * *((_DWORD *)this + 2) + 2);
  operator delete[](*(void **)this);
  *(_DWORD *)this = v4;
  *((_DWORD *)this + 1) = v3;
  return 1;
}
