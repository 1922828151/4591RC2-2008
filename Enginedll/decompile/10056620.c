/*
 * func-name: ?ShutDown@BatchRenderer@@QAEXXZ
 * func-address: 0x10056620
 * callers: none
 * callees: 0x10055820, 0x10056380, 0x100e6830, 0x101a2500
 */

void __thiscall BatchRenderer::ShutDown(void **this)
{
  Material *v2; // ecx
  _DWORD **v3; // edi
  int v4; // ebx
  void *v5; // esi

  BatchRenderer::ClearAll((BatchRenderer *)this);
  v2 = (Material *)this[263];
  if ( v2 )
  {
    Material::Release(v2);
    this[263] = 0;
  }
  if ( this[262] )
  {
    operator delete(this[262]);
    this[262] = 0;
  }
  v3 = (_DWORD **)(this + 3);
  v4 = 256;
  do
  {
    --(*v3)[4];
    v5 = *v3;
    if ( (int)(*v3)[4] <= 0 )
    {
      if ( v5 )
      {
        sub_10055820(*v3);
        operator delete(v5);
        *v3 = 0;
      }
    }
    ++v3;
    --v4;
  }
  while ( v4 );
}
