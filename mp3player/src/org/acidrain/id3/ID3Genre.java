/****************************************************************************
 * Copyright (C) 2007 Lemay, Mathieu                                        *                             
 *                                                                          *
 * This program is free software; you can redistribute it and/or modify     *
 * it under the terms of the GNU General Public License as published by     *
 * the Free Software Foundation; either version 2 of the License, or        *
 * (at your option) any later version.                                      *
 *                                                                          *
 * This program is distributed in the hope that it will be useful,          *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of           *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the             *
 * GNU General Public License for more details.                             *
 *                                                                          *
 * You should have received a copy of the GNU General Public License along  *
 * with this program; if not, write to the Free Software Foundation, Inc.,  *
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.              *
 *                                                                          *
 * You can contact the original author at acidrain1@gmail.com               *
 ****************************************************************************/

package org.acidrain.id3;

/**********
 * Classe contenant la liste des genres
 * predefinis pour les ID3
 * @author Mathieu Lemay
 * @version 1.0
 **********/
public abstract class ID3Genre {
    private static final String [][] listeGenres = {
        {"0", "Blues"},
        {"1", "Classic Rock"},
        {"2", "Country"},
        {"3", "Dance"},
        {"4", "Disco"},
        {"5", "Funk"},
        {"6", "Grunge"},
        {"7", "Hip-Hop"},
        {"8", "Jazz"},
        {"9", "Metal"},
        {"10", "New Age"},
        {"11", "Oldies"},
        {"12", "Other"},
        {"13", "Pop"},
        {"14", "R&B"},
        {"15", "Rap"},
        {"16", "Reggae"},
        {"17", "Rock"},
        {"18", "Techno"},
        {"19", "Industrial"},
        {"20", "Alternative"},
        {"21", "Ska"},
        {"22", "Death Metal"},
        {"23", "Pranks"},
        {"24", "Soundtrack"},
        {"25", "Euro-Techno"},
        {"26", "Ambient"},
        {"27", "Trip-Hop"},
        {"28", "Vocal"},
        {"29", "Jazz+Funk"},
        {"30", "Fusion"},
        {"31", "Trance"},
        {"32", "Classical"},
        {"33", "Instrumental"},
        {"34", "Acid"},
        {"35", "House"},
        {"36", "Game"},
        {"37", "Sound Clip"},
        {"38", "Gospel"},
        {"39", "Noise"},
        {"40", "AternRock"},
        {"41", "Bass"},
        {"42", "Soul"},
        {"43", "Punk"},
        {"44", "Space"},
        {"45", "Meditative"},
        {"46", "Instrumental Pop"},
        {"47", "Instrumental Rock"},
        {"48", "Ethnic"},
        {"49", "Gothic"},
        {"50", "Darkwave"},
        {"51", "Techno-Industrial"},
        {"52", "Electronic"},
        {"53", "Pop-Folk"},
        {"54", "Eurodance"},
        {"55", "Dream"},
        {"56", "Southern Rock"},
        {"57", "Comedy"},
        {"58", "Cult"},
        {"59", "Gangsta"},
        {"60", "Top 40"},
        {"61", "Christian Rap"},
        {"62", "Pop/Funk"},
        {"63", "Jungle"},
        {"64", "Native American"},
        {"65", "Cabaret"},
        {"66", "New Wave"},
        {"67", "Psychadelic"},
        {"68", "Rave"},
        {"69", "Showtunes"},
        {"70", "Trailer"},
        {"71", "Lo-Fi"},
        {"72", "Tribal"},
        {"73", "Acid Punk"},
        {"74", "Acid Jazz"},
        {"75", "Polka"},
        {"76", "Retro"},
        {"77", "Musical"},
        {"78", "Rock & Roll"},
        {"79", "Hard Rock"},
        {"80", "Folk"},
        {"81", "Folk-Rock"},
        {"82", "National Folk"},
        {"83", "Swing"},
        {"84", "Fast Fusion"},
        {"85", "Bebob"},
        {"86", "Latin"},
        {"87", "Revival"},
        {"88", "Celtic"},
        {"89", "Bluegrass"},
        {"90", "Avantgarde"},
        {"91", "Gothic Rock"},
        {"92", "Progressive Rock"},
        {"93", "Psychedelic Rock"},
        {"94", "Symphonic Rock"},
        {"95", "Slow Rock"},
        {"96", "Big Band"},
        {"97", "Chorus"},
        {"98", "Easy Listening"},
        {"99", "Acoustic"},
        {"100", "Humour"},
        {"101", "Speech"},
        {"102", "Chanson"},
        {"103", "Opera"},
        {"104", "Chamber Music"},
        {"105", "Sonata"},
        {"106", "Symphony"},
        {"107", "Booty Bass"},
        {"108", "Primus"},
        {"109", "Porn Groove"},
        {"110", "Satire"},
        {"111", "Slow Jam"},
        {"112", "Club"},
        {"113", "Tango"},
        {"114", "Samba"},
        {"115", "Folklore"},
        {"116", "Ballad"},
        {"117", "Power Ballad"},
        {"118", "Rhythmic Soul"},
        {"119", "Freestyle"},
        {"120", "Duet"},
        {"121", "Punk Rock"},
        {"122", "Drum Solo"},
        {"123", "A capella"},
        {"124", "Euro-House"},
        {"125", "Dance Hall"},
        {"126", "Goa"},
        {"127", "Drum & Bass"},
        {"128", "Club-House"},
        {"129", "Hardcore"},
        {"130", "Terror"},
        {"131", "Indie"},
        {"132", "BritPop"},
        {"133", "Negerpunk"},
        {"134", "Polsk Punk"},
        {"135", "Beat"},
        {"136", "Christian Gangsta Rap"},
        {"137", "Heavy Metal"},
        {"138", "Black Metal"},
        {"139", "Crossover"},
        {"140", "Contemporary Christian"},
        {"141", "Christian Rock"},
        {"142", "Merengue"},
        {"143", "Salsa"},
        {"144", "Thrash Metal"},
        {"145", "Anime"},
        {"146", "JPop"},
        {"147", "Synthpop"}
    };
    
    public static final int NB_GENRES = listeGenres.length;
    
    //PROBABLEMENT TEMPORAIRE
    public static final String validChars = "1234567890abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";
    
    /**********
     * Traduit un no de genre en String
     * @param no No du genre
     * @return Nom du genre
     **********/
    public static String noToString(int no) {
        for (int i=0; i<NB_GENRES; i++) {
            if (no == Integer.parseInt(listeGenres[i][0])) {
                return listeGenres[i][1];
            }
        }
        
        return "";
    }
    
    /**********
     * Traduit un String de genre en no
     * @param genre Nom du genre
     * @return No du genre
     **********/
    public static int stringToNo(String genre) {
        for (int i=0; i<NB_GENRES; i++) {
            if (listeGenres[i][1].toLowerCase().equals(genre.toLowerCase())) {
                return Integer.parseInt(listeGenres[i][0]);
            }
        }
        
        return -1;
    }
    
    /**********
     * Retourne la liste des genres en ordre de Numero
     * @return La liste des genres
     **********/
    public static String [][] getListeGenresNo() {
        for (int i=0; i<NB_GENRES-1; i++) {
            for (int j=i+1; j<NB_GENRES; j++) {
                if (Integer.parseInt(listeGenres[i][0]) > Integer.parseInt(listeGenres[j][0])) {
                    String [] temp = listeGenres[i];
                    listeGenres[i] = listeGenres[j];
                    listeGenres[j] = temp;
                }
            }
        }

        return listeGenres;
    }
    
    /**********
     * Retourne la liste des genres en ordre de Nom
     * @return La liste des genres triee par nom
     **********/
    public static String [][] getListeGenresNom() {
        for (int i=0; i<NB_GENRES-1; i++) {
            for (int j=i+1; j<NB_GENRES; j++) {
                if (listeGenres[i][1].compareTo(listeGenres[j][1]) > 0) {
                    String [] temp = listeGenres[i];
                    listeGenres[i] = listeGenres[j];
                    listeGenres[j] = temp;
                }
            }
        }

        return listeGenres;
    }
}
