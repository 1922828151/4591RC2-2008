/*
 * func-name: ?Tick@PrefabInstance@@UAEXXZ
 * func-address: 0x10116a40
 * callers: none
 * callees: 0x1004e070, 0x1005f1c0, 0x101025c0
 */

void __usercall PrefabInstance::Tick(PrefabInstance *this@<ecx>, int *a2@<edi>)
{
  int v3; // ecx
  void *v4; // eax

  Prefab::Tick(this, a2, (char *)this);
  if ( *(_BYTE *)(*((_DWORD *)this + 178) + 724)
    && *((_BYTE *)this + 1080)
    && *((float *)this + 271) - *((float *)this + 267) > 10.0
    && *((_DWORD *)this + 269) != -1 )
  {
    v3 = *((_DWORD *)this + 179);
    if ( v3 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 12))(v3, 1);
      *((_DWORD *)this + 179) = 0;
    }
    sub_101025C0((int)this);
    v4 = sub_1005F1C0();
    (*(void (__thiscall **)(void *, _DWORD))(*(_DWORD *)v4 + 12))(v4, *((unsigned __int16 *)this + 314));
    *((_DWORD *)this + 157) = -1;
    *((_DWORD *)this + 269) = -1;
  }
}
