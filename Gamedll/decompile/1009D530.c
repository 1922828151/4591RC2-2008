/*
 * func-name: ??1RandomTextureTraceLine@@UAE@XZ_0
 * func-address: 0x1009d530
 * callers: 0x100122f1
 * callees: 0x100162de, 0x102c9d50
 */

void __thiscall RandomTextureTraceLine::~RandomTextureTraceLine(RandomTextureTraceLine *this)
{
  void *v2; // eax

  v2 = (void *)*((_DWORD *)this + 97);
  if ( v2 )
    operator delete(v2);
  *((_DWORD *)this + 97) = 0;
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 99) = 0;
  std::vector<Material *>::~vector<Material *>((char *)this + 368);
  if ( *((_DWORD *)this + 89) )
    operator delete(*((void **)this + 89));
  *((_DWORD *)this + 89) = 0;
  *((_DWORD *)this + 90) = 0;
  *((_DWORD *)this + 91) = 0;
  TraceLineSystem::~TraceLineSystem(this);
}
