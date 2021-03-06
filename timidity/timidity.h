/*
    TiMidity -- Experimental MIDI to WAVE converter
    Copyright (C) 1995 Tuukka Toivonen <toivonen@clinet.fi>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the Perl Artistic License, available in COPYING.
 */

#include "readmidi.h"

typedef struct {
	int32 samples;
	Sint32 duration_ms;
	MidiEvent *events;
} MidiSong;

extern int Timidity_Init(int rate, int format, int channels, int samples);
extern const char *Timidity_Error(void);
extern void Timidity_SetVolume(int volume);
extern int Timidity_PlaySome(void *stream, int samples);
extern MidiSong *Timidity_LoadSong_RW(SDL_RWops *rw, int freerw);
extern void Timidity_Start(MidiSong *song);
extern int Timidity_Active(void);
extern void Timidity_Stop(void);
extern void Timidity_FreeSong(MidiSong *song);
extern void Timidity_Close(void);
