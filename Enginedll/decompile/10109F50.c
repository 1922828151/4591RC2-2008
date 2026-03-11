/*
 * func-name: ?PurgeSound2D@Precacher@@SAXAAPAVSound@@@Z
 * func-address: 0x10109f50
 * callers: 0x10150500
 * callees: 0x10054c00, 0x1010f500
 */

void __cdecl Precacher::PurgeSound2D(struct Sound **a1)
{
  struct Sound **i; // esi
  int v2; // ebx
  struct AudioDevice *v3; // eax
  int v4; // [esp+Ch] [ebp-8h] BYREF
  struct Sound **v5; // [esp+10h] [ebp-4h]

  v5 = *(struct Sound ***)dword_112414F4;
  for ( i = v5; i != (struct Sound **)dword_112414F4 && i[2] != *a1; i = (struct Sound **)*i )
    ;
  v2 = dword_112414F4;
  if ( !&Precacher::m_listSounds2D )
    invalid_parameter_noinfo();
  if ( i != (struct Sound **)v2 )
    sub_1010F500((int)&v4, (int)&Precacher::m_listSounds2D, i);
  if ( *a1 )
  {
    v3 = AudioDevice::Instance();
    (*(void (__thiscall **)(struct AudioDevice *, _DWORD))(*(_DWORD *)v3 + 20))(v3, *a1);
    *a1 = 0;
  }
}
