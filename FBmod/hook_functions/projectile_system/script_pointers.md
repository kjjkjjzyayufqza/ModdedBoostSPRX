
### Throne Drei melee assist
- 0xceeb00
- 2nd hit id
  - 65th - 0x00D4F720 -> 0x8EC6B4 -> 0xBA84E4D2 

### Acguy melee assist
- 0xcefa08
- 2nd hit id, 3rd hit id
  - 165th - 0x00D4F860 -> 0x86CA98 -> [0xBA84E4D2, 0xC6827825, 0x4A1CABE1] 

### Deathscythe Hell melee assist
- 0xcd8120
- 2nd hit id, subsequent (loops) hit ids
  - 65th - 0x00D4C5E8 -> 0x89DE34 -> 0x5B03A263

### Harute melee assist
- 0xce41a8

## Qubeley melee grab assist
- 0xcaf0c8

## Kapool
- 0x8D6C28, 0xd9fe1c
- 0xce9d88

## Raider gundam's hammer throw
- Super fucking complicated, it is neither a projectile nor a melee hitbox
  - Looking at Turn A's hammer, there's projectile associated with the hit hash, but there's no sys_22 call from script
  - Searching for the projectile's hash associated with the hit hash points to 0x5A1A94 or 0x5a20fc, a super complicated func