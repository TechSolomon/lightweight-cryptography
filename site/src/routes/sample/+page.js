import { redirect } from '@sveltejs/kit';

export async function load({ fetch }) {
    const res = await fetch('https://jsonplaceholder.typicode.com/posts');
    const samples = await res.json();
    // console.log(samples);

    if (res.ok) {
        return {
            props: {
                samples
            }
        };
    }

    return {
        status: 301,
        error: new Error('Could not fetch the samples.')
    };
}
