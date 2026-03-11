/*
 * func-name: ?SetBufferSize@CUniBuffer@CREEditBox@@QAE_NH@Z
 * func-address: 0x100a5570
 * callers: none
 * callees: 0x101a24ac, 0x101a252e, 0x101a253a
 */

char __thiscall CREEditBox::CUniBuffer::SetBufferSize(CREEditBox::CUniBuffer *this, int a2)
{
  int v3; // eax
  int v4; // ebp
  void *v5; // edi

  if ( *((_DWORD *)this + 1) >= a2 )
    return 1;
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 1);
    v4 = 2 * v3;
    if ( !v3 )
      v4 = 256;
    v5 = operator new(2 * v4);
    if ( !v5 )
      break;
    if ( *(_DWORD *)this )
      memcpy(v5, *(const void **)this, 2 * *((_DWORD *)this + 2) + 2);
    operator delete[](*(void **)this);
    *(_DWORD *)this = v5;
    *((_DWORD *)this + 1) = v4;
    if ( v4 >= a2 )
      return 1;
  }
  return 0;
}
