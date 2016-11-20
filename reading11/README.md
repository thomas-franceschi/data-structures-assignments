Reading 11
==========
 1. Google File System is trying to solve problems specific to Google's own application of a 
 filesystem, specifically frequent component failures and storing of larger than average files 
 by other filesystem's standards. Google solves both of these problems by redundently storing 
 data across multiple (minimum three) disks in the event of a failure and increasing the block 
 size to 64 mb to prevent high fragmentation of mutli GB files. Data is stored spread across 
 multiple "chunkservers" with a single "master" that stores the location of each chunk on each 
 server. When data is requested the master serves up the specific chunkserver holding the data 
 being requested, and it is cached so you can access the same server many times without neeing 
 to request the location from the master every time. Based on what I read, I assume that the 
 master relies on a hash table to store the metadat of chunkservers and avtree of some sort to 
 maintain the "folder" hierarchy of files.

 2. Map-Reduce is trying to solve the problem of processing lots of data that in turn is used 
 to produce other data, spread across hundreds of CPUs in a user-friendly manner. It solves this 
 problem by providing 2 functions, one for processing initial data and outputing intermediate 
 key/value pairs, and a second one to reduce and merge the intermediate pairs. The first phase 
 reads in a bunch of data and outputs the intermediate key value pairs, this is done multiple 
 times. The next phase then takes in the key/value pairs from multiple sets and combines all of 
 the values for a particular key into one. The third phase merges all of the combined key/value 
 pairs into one set. Map-Reduce probably uses hash-tables to store both the intermediate data 
 and reduced data and I would imagine uses merge-sort to prepare the data to be combined between 
 multiple sets. 