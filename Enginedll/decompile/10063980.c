/*
 * func-name: ?Update@Camera@@QAEXXZ
 * func-address: 0x10063980
 * callers: 0x10080c60, 0x1016db80, 0x1016dcd0
 * callees: 0x1001cb70, 0x100244d0, 0x10024540, 0x100635c0, 0x101189f0, 0x10143e00, 0x10143fd0
 */

void __thiscall Camera::Update(Camera *this)
{
  struct RenderDevice *v2; // eax
  struct RenderDevice *v3; // eax
  struct NxPhysics *v4; // eax
  float v5; // [esp+2Ch] [ebp-D0h]
  float v6[6]; // [esp+30h] [ebp-CCh] BYREF
  float v7[16]; // [esp+48h] [ebp-B4h] BYREF
  void *v8[29]; // [esp+88h] [ebp-74h] BYREF

  v2 = RenderDevice::Instance();
  qmemcpy(
    (char *)this + 220,
    (const void *)(*(int (__thiscall **)(struct RenderDevice *, float *, char *, char *, _DWORD))(*(_DWORD *)v2 + 408))(
                    v2,
                    v7,
                    (char *)this + 352,
                    (char *)this + 376,
                    *((float *)this + 97)),
    0x40u);
  v3 = RenderDevice::Instance();
  qmemcpy(
    (char *)this + 156,
    (const void *)(*(int (__thiscall **)(struct RenderDevice *, float *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 412))(
                    v3,
                    v7,
                    *((float *)this + 98),
                    *((float *)this + 99),
                    *((float *)this + 100)),
    0x40u);
  *((float *)this + 101) = *((float *)this + 98);
  *((float *)this + 102) = *((float *)this + 99);
  *((float *)this + 103) = *((float *)this + 100);
  *((_BYTE *)this + 348) = 0;
  qmemcpy((char *)this + 284, sub_1001CB70((char *)this + 220, v7, (int)this + 156), 0x40u);
  Camera::CreateClipPlanes(this, this, (Camera *)((char *)this + 284));
  CollisionInfo::CollisionInfo((CollisionInfo *)v8);
  v8[28] = 0;
  v5 = 0.0 * 9999.0;
  v6[3] = v5;
  v6[5] = v5;
  v6[0] = *((float *)this + 88) + v5;
  v6[1] = *((float *)this + 89) + 9999.0;
  v6[2] = *((float *)this + 90) + v5;
  v4 = NxPhysics::Instance();
  NxPhysics::RayCast(v4, (char *)this + 352, v6, 1, v8, -1);
  *((void **)this + 104) = v8[16];
  CollisionInfo::~CollisionInfo(v8);
}
