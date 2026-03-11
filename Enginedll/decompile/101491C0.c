/*
 * func-name: sub_101491C0
 * func-address: 0x101491c0
 * callers: none
 * callees: 0x101a24ac, 0x101a252e, 0x101a253a
 */

int __thiscall sub_101491C0(int this, void *Src, size_t Size)
{
  size_t v4; // eax
  void *v5; // edi
  const void *v6; // eax

  v4 = Size + *(_DWORD *)(this + 4);
  if ( v4 > *(_DWORD *)(this + 8) )
  {
    *(_DWORD *)(this + 8) = v4 + 4096;
    v5 = operator new(v4 + 4096);
    v6 = *(const void **)(this + 12);
    if ( v6 )
    {
      memcpy(v5, v6, *(_DWORD *)(this + 4));
      operator delete[](*(void **)(this + 12));
    }
    *(_DWORD *)(this + 12) = v5;
  }
  memcpy((void *)(*(_DWORD *)(this + 4) + *(_DWORD *)(this + 12)), Src, Size);
  *(_DWORD *)(this + 4) += Size;
  return this;
}
