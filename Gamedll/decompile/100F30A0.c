/*
 * func-name: ?LoadModel@AdapterActor@GameClient@@UAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z_0
 * func-address: 0x100f30a0
 * callers: 0x1000e28c
 * callees: 0x1000b7d0, 0x1001684c
 */

char __thiscall GameClient::AdapterActor::LoadModel(int this, void *a2, int a3, int a4)
{
  int v5; // eax
  void *Model; // eax
  int v7; // ebx
  int v8; // ebp
  int v10; // eax
  _DWORD v11[15]; // [esp-28h] [ebp-3Ch] BYREF

  if ( *(_BYTE *)(this + 1108) )
  {
    v5 = AsyncLoader::Instance(a2, *(_DWORD *)(this + 1232));
    Model = (void *)AsyncLoader::SubmitLoadModel(v5);
    v7 = *(_DWORD *)(this + 1240);
    a2 = Model;
    v8 = sub_1001684C(v7, *(_DWORD *)(v7 + 4), (int)&a2);
    sub_1000B7D0(1);
    *(_DWORD *)(v7 + 4) = v8;
    **(_DWORD **)(v8 + 4) = v8;
  }
  else
  {
    v11[9] = 1;
    v11[8] = 0;
    v11[7] = 0;
    v11[14] = v11;
    std::string::string(v11, a2);
    v10 = Precacher::CacheModel();
    *(_DWORD *)(this + 716) = v10;
    if ( !v10 )
      return 0;
  }
  if ( *(_BYTE *)(this + 1108) )
  {
    std::string::operator=(this + 1052, a3);
    std::string::operator=(this + 1080, a4);
  }
  return 1;
}
