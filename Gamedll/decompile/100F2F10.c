/*
 * func-name: ?InCamFrustum@AdapterActor@GameClient@@QAE_NXZ_0
 * func-address: 0x100f2f10
 * callers: 0x10014132
 * callees: 0x10003f58, 0x1000a097, 0x102c0750
 */

bool __thiscall GameClient::AdapterActor::InCamFrustum(GameClient::AdapterActor *this)
{
  int v1; // ecx
  CameraHandler *v2; // eax
  Camera *Camera; // eax
  bool v4; // bl
  const struct BBox *WorldBBox; // [esp-4h] [ebp-48h]
  _BYTE v7[40]; // [esp+10h] [ebp-34h] BYREF
  int v8; // [esp+40h] [ebp-4h]

  v1 = *((_DWORD *)this + 179);
  if ( !v1 )
    return 0;
  WorldBBox = (const struct BBox *)StaticModel::GetWorldBBox(v1, v7);
  v8 = 0;
  v2 = CameraHandler::Instance();
  Camera = CameraHandler::GetCamera(v2, 0);
  v4 = Camera::BoxInFrustum(Camera, WorldBBox, 0, 0) != 0;
  v8 = -1;
  sub_102C0750(v7);
  return v4;
}
