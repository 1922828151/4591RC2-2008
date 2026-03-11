/*
 * func-name: ?Alloc@ShaderVar@@QAEXPAXH@Z
 * func-address: 0x10009e40
 * callers: 0x100e4db0
 * callees: 0x10122bb0, 0x101a24ac, 0x101a252e
 */

void __thiscall ShaderVar::Alloc(ShaderVar *this, void *Src, size_t Size)
{
  void *v4; // eax

  ShaderVar::Destroy(this);
  *((_DWORD *)this + 16) = Size;
  v4 = operator new(Size);
  *((_DWORD *)this + 15) = v4;
  memcpy(v4, Src, Size);
  *((_DWORD *)this + 69) = 2;
}
