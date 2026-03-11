/*
 * func-name: ?SetTransfom@Canvas@@UAEXAAVMatrix@@@Z
 * func-address: 0x100645f0
 * callers: none
 * callees: 0x101189f0
 */

void __thiscall Canvas::SetTransfom(Canvas *this, struct Matrix *a2)
{
  struct RenderDevice *v2; // eax

  v2 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, struct Matrix *))(*(_DWORD *)v2 + 456))(v2, a2);
}
